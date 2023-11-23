# CC specifies the C compiler (gcc).
CC = gcc

#CFLAGS sets the compiler flags, including the -Iinclude flag to specify the include directory.
CFLAGS = -Wall -Iinclude

#SRCDIR specifies the source code directory.
SRCDIR = src

#OBJDIR specifies the directory where object files will be placed.
OBJDIR = build

#The BINDIR variable is added to specify the directory where the executable should be placed, which is bin.
BINDIR = bin

#SOURCES uses wildcard to find all .c files in the src directory.
SOURCES = $(wildcard $(SRCDIR)/*.c)

#OBJECTS generates a list of object files by replacing .c extensions with .o.
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

#EXECUTABLE specifies the name of the final executable.
EXECUTABLE = $(BINDIR)/calculator


#all is the default target and builds the calculator executable.
all: $(BINDIR) $(OBJDIR) $(EXECUTABLE)

#The $(BINDIR) target is added to ensure that the bin directory exists.
$(BINDIR):
	mkdir -p $(BINDIR)

#$(OBJDIR) ensures the build directory exists.
$(OBJDIR):
	mkdir -p $(OBJDIR)

#$(OBJDIR)/%.o is a pattern rule that compiles each .c file into a .o object file.
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

#$(EXECUTABLE) links all object files to create the final executable.
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

#clean removes the build directory and the executable.
clean:
	rm -rf $(OBJDIR) $(BINDIR)