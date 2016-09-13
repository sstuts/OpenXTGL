.SUFFIXES : .py  .asm 

C_TARGETS =   \
		  server_dispatch.c \
		  server_retval.c   \
		  server_get.c		\
		  server_simpleget.c

H_TARGETS = \
		  server_dispatch.h 

ALL_TARGETS = \
	$(C_TARGETS)	\
	$(H_TARGETS)	

SPECIAL_FILES =  \
	server_special \
	../../state_tracker/Scripts/state_special

all: $(ALL_TARGETS) $(SPECIAL_FILES)

$(SPECIAL_FILES) :


.py.h: 
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@

.py.c:
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@


clean:
	del $(ALL_TARGETS)

server_dispatch.h: server_dispatch_header.py $(SPECIAL_FILES)
	$(PYTHON)  server_dispatch_header.py $(API_PARSER_DIR) > $@ || del $@


