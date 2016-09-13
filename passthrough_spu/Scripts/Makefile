.SUFFIXES : .py .h

GEN_C_TARGETS =		\
	passthroughspu.c		

ALL_TARGETS =	\
	$(GEN_C_TARGETS) 


.py.c:
	$(PYTHON) $<  $(API_PARSER_DIR) >$@ || del $@

all: $(ALL_TARGETS)

clean:
	del $(GEN_C_TARGETS)