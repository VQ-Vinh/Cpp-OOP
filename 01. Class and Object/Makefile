CXX      := g++
CXXFLAGS := -Wall -Wextra -std=c++11
OUTDIR   := ../build

CPP_FILES := $(wildcard *.cpp)
TARGETS   := $(addprefix $(OUTDIR)/,$(patsubst %.cpp,%.exe,$(CPP_FILES)))

.PHONY: all clean FORCE

all: $(TARGETS)

$(OUTDIR):
	@mkdir -p "$(OUTDIR)"

FORCE:

$(OUTDIR)/%.exe: FORCE | $(OUTDIR)
	@if [ ! -f "$@" ] || [ "$*.cpp" -nt "$@" ]; then \
		echo "Compiling: $*.cpp"; \
		$(CXX) $(CXXFLAGS) -o "$@" "$*.cpp"; \
	fi

%.cpp: FORCE
	@name="$$(basename "$@" .cpp)"; \
	rm -f "$$name.exe" "$(OUTDIR)/$$name.exe"; \
	echo "Compiling: $@"; \
	$(CXX) $(CXXFLAGS) -o "$(OUTDIR)/$$name.exe" "$@"; \
	"$(OUTDIR)/$$name.exe"

clean:
	rm -f *.exe "$(OUTDIR)"/*.exe

Makefile: ;
