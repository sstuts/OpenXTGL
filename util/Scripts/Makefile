.SUFFIXES : .py .h 

GEN_C_TARGETS =		\
	debug_opcodes.c
	
.py.c:
	$(PYTHON) $< $(API_PARSER_DIR)  >$@ || del $@

all: debug_opcodes.c

clean:
	del $(GEN_C_TARGETS)
