.SUFFIXES : .py  .asm 

C_TARGETS =   \
		  unpack.c

H_TARGETS = \
		  unpack_extend.h 

ALL_TARGETS = \
	$(C_TARGETS)	\
	$(H_TARGETS)	

SPECIAL_FILES =  \
	unpacker_special

all: $(ALL_TARGETS) $(SPECIAL_FILES)

$(SPECIAL_FILES) :


.py.h: 
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@

.py.c:
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@


clean:
	del $(ALL_TARGETS)

unpack_extend.h: unpack_extend.py $(SPECIAL_FILES)
	$(PYTHON)  unpack_extend.py $(API_PARSER_DIR) > $@ || del $@


