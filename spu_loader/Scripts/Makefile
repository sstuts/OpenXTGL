.SUFFIXES : .py .h

GEN_C_TARGETS =		\
	spuchange.c		\
	spucopy.c		\
	dispatch.c		\
	glloader.c

H_TARGETS = spu_dispatch_table.h 

ALL_TARGETS =	\
	$(GEN_C_TARGETS) \
	spu_dispatch_table.h 

all: $(ALL_TARGETS)

.py.c:
	$(PYTHON) $<  $(API_PARSER_DIR) >$@ || del $@

spu_dispatch_table.h: dispatchheader.py  $(API_PARSER_DIR)\apiutil.py
	$(PYTHON)  dispatchheader.py $(API_PARSER_DIR) > $@  || del $@



clean:
	del $(GEN_C_TARGETS) $(H_TARGETS)
