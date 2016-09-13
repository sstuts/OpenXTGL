.SUFFIXES : .py  .asm 

C_TARGETS = feedbackspu.c \
          feedback_state.c   \

H_TARGETS = \
		  feedbackspu_proto.h 

ALL_TARGETS = \
	$(C_TARGETS)	\
	$(H_TARGETS)	

SPECIAL_FILES =  \
	feedback_special \
	select_special \
	feedback_state_special	

all: $(ALL_TARGETS) $(SPECIAL_FILES)

$(SPECIAL_FILES) :

.py.h: 
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@

.py.c:
	$(PYTHON) $< $(API_PARSER_DIR)  $(@D) > $@ || del $@


clean:
	del $(ALL_TARGETS)
