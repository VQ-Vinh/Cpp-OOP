CXX      := g++
CXXFLAGS := -Wall -Wextra -std=c++11
OUTDIR   := build

.PHONY: all clean

all: $(OUTDIR)
	@/usr/bin/find . -name "*.cpp" | /usr/bin/sort | while IFS= read -r src; do \
		exe="$(OUTDIR)/$$(/usr/bin/basename "$$src" .cpp).exe"; \
		if [ ! -f "$$exe" ] || [ "$$src" -nt "$$exe" ]; then \
			echo "Compiling: $$src"; \
			$(CXX) $(CXXFLAGS) -o "$$exe" "$$src"; \
		fi \
	done

$(OUTDIR):
	mkdir -p "$(OUTDIR)"

clean:
	rm -rf "$(OUTDIR)"
