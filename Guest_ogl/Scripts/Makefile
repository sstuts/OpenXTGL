.SUFFIXES : .py  .asm 

C_TARGETS = NULLfuncs.c \
          tsfuncs.c   \
		  getprocaddress.c \
		  windows_exports.c

H_TARGETS = \
		  cr_gl.h 

ASM_TARGETS = \
		  windows_i386_exports.asm \
		  windows_exports.asm 

ALL_TARGETS = \
	$(C_TARGETS)	\
	$(H_TARGETS)	\
	$(ASM_TARGETS)	\
	$(DEF_TARGET)

!if "$(ARCH)" == "X64"
DEF_TARGET = cropengl.def
DEF_SCRIPT = defs64.py
!else
DEF_TARGET = cropengl-x86.def
DEF_SCRIPT = defs.py
!endif

all: $(ALL_TARGETS)

$(DEF_TARGET):
	$(PYTHON) $(DEF_SCRIPT) $(API_PARSER_DIR) > $@ || del $@

.py.asm:
	$(PYTHON) $< $(API_PARSER_DIR) > $@ || del $@

.py.h:
	$(PYTHON) $< $(API_PARSER_DIR) > $@ || del $@

.py.c:
	$(PYTHON) $< $(API_PARSER_DIR) > $@ || del $@

all: $(ALL_TARGETS)

clean:
	del $(ALL_TARGETS)

windows_exports.c: entrypoints.py
	$(PYTHON) entrypoints.py $(API_PARSER_DIR) > $@ || del $@
