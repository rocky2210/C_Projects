# CC specifies the C compiler (gcc).
CC = gcc

# CFLAGS sets the compiler flags.
CFLAGS = -Wall -Wextra -std=c99 -I./include

# SRCDIR specifies the source code directory.
SRCDIR = src

# OBJDIR specifies the directory where object files will be placed.
OBJDIR = build

# BINDIR specifies the directory where the executable should be placed.
BINDIR = bin

# SOURCES uses wildcard to find all .c files in the source directory.
SOURCES = $(wildcard $(SRCDIR)/*.c)

# OBJECTS generates a list of object files by replacing .c extensions with .o.
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

# EXECUTABLE specifies the name of the final executable.
EXECUTABLE = $(BINDIR)/curd

# all is the default target and builds the executable.
all: $(BINDIR) $(OBJDIR) $(EXECUTABLE)

# The $(BINDIR) target ensures that the bin directory exists.
$(BINDIR):
	mkdir -p $(BINDIR)

# The $(OBJDIR) target ensures that the build directory exists.
$(OBJDIR):
	mkdir -p $(OBJDIR)

# $(OBJDIR)/%.o is a pattern rule that compiles each .c file into a .o object file.
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# $(EXECUTABLE) links all object files to create the final executable.
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@ -lsqlite3

# clean removes the build directory and the executable.
clean:
	rm -rf $(OBJDIR) $(BINDIR)
