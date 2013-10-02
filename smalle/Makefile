#
#***********************************************************************
#                 SMALLE - the SMALlest Library Ever
#               Copyright (c) 2013 Deepa Karnad Dhurka 
#***********************************************************************
#  email: deepa.dhurka at gmail dot com
#  This code is distributed in the hope that it will be useful, 
#  but WITHOUT ANY WARRANTY; without even the implied warranty 
#  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
#  
#  This code is to be used for learning purposes only.
#***********************************************************************
#
CC     := gcc

LDFLAGS := -shared 

RM     := rm -f
MAJOR_VERSION := 0
MINOR_VERSION := 0
NAME    := smalle
LIBNAME := lib$(NAME).so
SONAME  := $(LIBNAME).$(MAJOR_VERSION)
REALNAME := $(SONAME).$(MINOR_VERSION)

COMLIB   := /usr/local/lib
COMINCL  := /usr/local/include

#set environment variable $MAKE to the correct
# binary. Useful when there are multiple versions
# installed. 
# Mandatory requirement: 3.82 version of make
ifndef MAKE
	MAKE := make
endif
ROOTDIR := $(CURDIR)
SRCDIR  := $(ROOTDIR)
INCLDIR := $(ROOTDIR)
OBJDIR  := $(ROOTDIR)/obj
#DOCDIR  := $(ROOTDIR)/doc

INCLUDES := -I$(ROOTDIR)
SRCS     := $(wildcard $(SRCDIR)/*.c)
OBJS     := $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))
LIBSTR   := libstr


CFLAGS := $(INCLUDES) -Wall -Wextra -g -fPIC -Wl,-export-dynamic 

# GNU ld:
LDFLAGS:= -shared -Wl,-soname,$(SONAME)

.PHONY: objects
objects: $(OBJS)

$(OBJS): | $(OBJDIR)

$(OBJDIR): 
	mkdir $(OBJDIR)

$(OBJDIR)/%.o : $(SRCDIR)/%.c 
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: dryrun
dryrun:
	@echo "$(MAKE)"
	@echo "$(CC) $(CFLAGS)"
	@echo "$(OBJS)"
	@echo "$(SRCS)"


.PHONY: all
all: $(REALNAME)

$(REALNAME):$(OBJS)
	@echo "	$(CC) $(LIBS) $(LDFLAGS) $(OBJS) -o $(REALNAME)"
	$(CC) $(LIBS) $(LDFLAGS) $(OBJS) -o $(REALNAME) -lc -rdynamic

.PHONY: clean
clean: 
	$(RM) $(TARGET_LIB) $(REALNAME) $(OBJS)
	$(RM) -r $(OBJDIR)

install:
	cp $(REALNAME) $(COMLIB)/
	ldconfig -n -v $(COMLIB)
	ln -sf $(COMLIB)/$(SONAME) $(COMLIB)/$(LIBNAME)
	cp $(INCLDIR)/smalle.h $(COMINCL)/
	@echo "*** NOTE: add $(COMLIB) to LD_LIBRARY_PATH env var ***"
