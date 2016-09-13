.SUFFIXES : .py .h

GEN_C_TARGETS =		\
	packspu.c		\
	packspu_get.c	\
	packspu_flush.c	\
	packspu_beginend.c 

ALL_TARGETS =	\
	$(GEN_C_TARGETS) \
	packspu_proto.h


.py.c:
	$(PYTHON) $<  $(API_PARSER_DIR) >$@ || del $@

all: $(ALL_TARGETS)

clean:
	del $(GEN_C_TARGETS)

packspu.c: pack.py packspu_special packspu_unimplemented_special
	$(PYTHON) pack.py $(API_PARSER_DIR) >$@ || del $@

packspu_get.c: packspu_get.py packspu_special $(SERVER_LIB)\get_sizes.py
	$(PYTHON) packspu_get.py $(API_PARSER_DIR) $(SERVER_LIB) >$@ || del $@

packspu_flush.c: packspu_flush.py packspu_flush_special	
	$(PYTHON) packspu_flush.py $(API_PARSER_DIR) >$@ || del $@

packspu_beginend.c: packspu_beginend.py packspu_vertex_special
	$(PYTHON) packspu_beginend.py $(API_PARSER_DIR) >$@ || del $@

packspu_proto.h: packspu_proto.py packspu_special packspu_unimplemented_special	
	$(PYTHON) packspu_proto.py $(API_PARSER_DIR)  $(@D) >$@ || del $@


