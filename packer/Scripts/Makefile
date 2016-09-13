.SUFFIXES : .py .h 

GEN_SWAP_TARGETS = \
	pack_arrays.c \
	pack_bounds.c \
	pack_bufferobject.c \
	pack_client.c \
	pack_clipplane.c \
	pack_fog.c \
	pack_lights.c \
	pack_materials.c \
	pack_matrices.c \
	pack_misc.c \
	pack_pixels.c \
	pack_point.c \
	pack_program.c \
	pack_regcombiner.c \
	pack_stipple.c 

GEN_C_TARGETS =		\
	pack_bbox.c \
	pack_current.c \
	packer.c

GEN_H_TARGETS =		\
	cr_opcodes.h	\
	cr_currentpointers.h \
	cr_packfunctions.h

PYTHON_SOURCES = \
	pack_swap.py \
	opcodes.py \
	pack_currentheader.py \
	pack_currenttypes.py \
	pack_header.py \
	packer_defs.py \
	packer.py \
	pack_header.py \
	packer_bbox.py

.py.h:
	$(PYTHON) $< $(API_PARSER_DIR) >$@ || del $@

	
all: $(GEN_C_TARGETS) $(GEN_H_TARGETS) $(GEN_SWAP_TARGETS)

$(GEN_SWAP_TARGETS):
	$(PYTHON) pack_swap.py  $(API_PARSER_DIR) $(SOURCEDIR)$(@F) > $(@B)_swap.c || del $(@B)_swap.c 

pack_arrays_swap.c: pack_swap.py
	$(PYTHON) pack_swap.py $(API_PARSER_DIR) $(SOURCEDIR)pack_arrays.c >$@ || del $@

clean:
	del $(GEN_SWAP_TARGETS)
	del $(GEN_C_TARGETS)
	del $(GEN_H_TARGETS)

cr_opcodes.h: opcodes.py
	$(PYTHON) opcodes.py $(API_PARSER_DIR)  >$@ || del $@

cr_currentpointers.h: pack_currentheader.py pack_currenttypes.py
	$(PYTHON) pack_currentheader.py  $(API_PARSER_DIR) >$(INCLUDE_DIR)\state\$@ || del $@

cr_packfunctions.h: pack_header.py packer_special
	$(PYTHON) pack_header.py $(API_PARSER_DIR) $(@D) > $@ || del $@

packer.def: packer_defs.py
	$(PYTHON) packer_defs.py $(API_PARSER_DIR)  $(@D) > $@ || del $@

packer.c: packer.py packer_special
	$(PYTHON) packer.py $(API_PARSER_DIR)  $(@D) > $@ || del $@

pack_bbox.c: packer_bbox.py
	$(PYTHON) packer_bbox.py $(API_PARSER_DIR)  $(@D) > $@ || del $@

pack_current.c: pack_current.py pack_currenttypes.py
	$(PYTHON) pack_current.py $(API_PARSER_DIR) > $@ || del $@

