CC = clang
CFLAGS = -Wall -Wextra -I/usr/local/include
LDFLAGS = -L/usr/local/lib
LDLIBS = -lcs50          # 关键：链接 cs50 库

# 自动查找所有 .c 文件
SOURCES = $(wildcard *.c)
TARGETS = $(SOURCES:.c=)

# 默认目标
all: $(TARGETS)

# 编译规则 - 关键修改在这里
%: %.c
	$(CC) $(CFLAGS) $< $(LDFLAGS) $(LDLIBS) -o $@

# 清理
clean:
	rm -f $(TARGETS)
	rm -f *.o

# 显示编译命令（调试用）
verbose:
	$(CC) $(CFLAGS) $< $(LDFLAGS) $(LDLIBS) -o $@

.PHONY: all clean verbose