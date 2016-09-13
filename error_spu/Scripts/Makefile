.SUFFIXES : .py  .asm 

C_TARGETS =   \
		  error.c 

H_TARGETS = 

ALL_TARGETS = \
	$(C_TARGETS)	\
	$(H_TARGETS)	

SPECIAL_FILES = 

all: $(ALL_TARGETS) 


.py.h: 
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@

.py.c:
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@


clean:
	del $(ALL_TARGETS)



