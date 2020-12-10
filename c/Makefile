CC      := clang
CCFLAGS := -std=c11

out_dir      := ./bin
target_name  := $(shell ls *.c)
target_name  := $(patsubst %.c,%,$(target_name))
target       := $(addprefix $(out_dir)/,$(target_name))

all: $(out_dir) $(target)

$(out_dir)/%: %.c
	$(CC) $^ -o $@ $(CCFLAGS)

$(out_dir):
	mkdir -p $(out_dir)

.PHONY:
clean:
	rm -rfv $(out_dir)
