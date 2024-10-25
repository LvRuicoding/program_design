# Makefile for sorting program

# 编译器
CC = gcc

# 编译器标志
CFLAGS = -Wall -Wextra -std=c11

# 可执行文件名称
TARGET = addnum

# 源文件
SRC = 0x02.c

# 目标文件
OBJ = $(SRC:.c=.o)

# 生成可执行文件
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# 生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理命令
clean:
	rm -f $(OBJ) $(TARGET)

# 伪目标
.PHONY: clean
