# 定义编译器
CC = gcc

# 定义编译选项
CFLAGS = -Wall -g

# 链接数学库
LDFLAGS = -lm

# 定义源文件和目标文件
SRC = 00145.c
OBJ = 00145.o
TARGET = 00145

# 生成可执行文件规则
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)

# 编译源文件生成目标文件规则
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

# 清理生成的文件
clean:
	rm -f $(OBJ) $(TARGET)

# 伪目标，不会与文件同名
.PHONY: clean
