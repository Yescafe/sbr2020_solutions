CC      := clang++
CCFLAGS := -std=c++11

out_dir      := ./bin
target_name  := $(shell ls *.cpp)
target_name  := $(patsubst %.cpp,%,$(target_name))
target       := $(addprefix $(out_dir)/,$(target_name))

all: $(out_dir) $(target)

$(out_dir)/%: %.cpp
	$(CC) $^ -o $@ $(CCFLAGS)

$(out_dir):
	mkdir -p $(out_dir)

.PHONY:
clean:
	rm -rfv $(out_dir)
