.SUFFIXES : .py .h .def

GEN_C_TARGETS =		\
	state_buffer_gen.c \
	state_current_gen.c \
	state_fog_gen.c \
	state_hint_gen.c \
	state_lighting_gen.c \
	state_line_gen.c \
	state_multisample_gen.c \
	state_polygon_gen.c \
	state_regcombiner_gen.c \
	state_viewport_gen.c \
	state_get.c \
	state_isenabled.c 

GEN_H_TARGETS =		\
	$(INCLUDE_DIR)\state\cr_statefuncs.h

CROGL_STATE_PATH = $(INCLUDE_DIR)\state

ALL_TARGETS = $(GEN_H_TARGETS)  $(GEN_C_TARGETS) state.def

.py.h:
	$(PYTHON) $< $(API_PARSER_DIR)  >$@ || del $@

all: $(ALL_TARGETS)

clean:
	!IF EXIST ( $(INCLUDE_DIR)\state\cr_statefuncs.h) del $(INCLUDE_DIR)\state\cr_statefuncs.h
	!IF EXIST (state.def) del state.def
	del $(GEN_C_TARGETS)

$(INCLUDE_DIR)\state\cr_statefuncs.h: state_funcs.py
	$(PYTHON) state_funcs.py $(API_PARSER_DIR) .  > $(INCLUDE_DIR)\state\$(@F) || del $(INCLUDE_DIR)\state\$@F

state_buffer_gen.c: state_buffer.txt gendiffcode.py
	$(PYTHON) gendiffcode.py buffer Buffer $(@D) > $@ || del $@

state_current_gen.c: state_current.py convert.py	
	$(PYTHON) state_current.py $(API_PARSER_DIR) $(PACKER_SCRIPTS) $(@D) > $@ || del $@
	
state_fog_gen.c: state_fog.txt convert.py
	$(PYTHON) gendiffcode.py fog Fog $(@D) > $@ || del $@

state_hint_gen.c: state_hint.txt gendiffcode.py
	$(PYTHON) gendiffcode.py hint Hint $(@D) > $@ || del $@

state_lighting_gen.c: state_lighting.txt gendiffcode.py
	$(PYTHON) gendiffcode.py lighting Lighting $(@D) > $@ || del $@

state_line_gen.c:  state_line.txt gendiffcode.py
	$(PYTHON) gendiffcode.py line Line $(@D) > $@ || del $@

state_multisample_gen.c: state_multisample.txt gendiffcode.py
	$(PYTHON) gendiffcode.py multisample Multisample $(@D) > $@ || del $@

state_polygon_gen.c: state_polygon.txt gendiffcode.py
	$(PYTHON) gendiffcode.py polygon Polygon $(@D) > $@ || del $@

state_regcombiner_gen.c: state_regcombiner.txt gendiffcode.py
	$(PYTHON) gendiffcode.py regcombiner RegCombiner $(@D) > $@ || del $@

state_viewport_gen.c:  state_viewport.txt gendiffcode.py	
	$(PYTHON) gendiffcode.py viewport Viewport $(@D) > $@ || del $@

state_get.c: state_get.txt state_extensions_get.txt get_components.py 
	$(PYTHON) state_get.py $(API_PARSER_DIR) $(@D) > $@ || del $@

state_isenabled.c: state_isenabled.py state_isenabled.txt state_extensions_isenabled.txt 
	$(PYTHON) state_isenabled.py $(API_PARSER_DIR) $(@D) > $@ || del $@

state.def: state_defs.py state_special state_select_special state_feedback_special
	$(PYTHON) state_defs.py $(API_PARSER_DIR) $(@D) > $@ || del $@

dump_gen.cpp: dump_gen.py $(SERVER_LIB)\get_sizes.py state_isenabled.txt state_extensions_isenabled.txt
	$(PYTHON) dump_gen.py $(API_PARSER_DIR) $(@D) $(SERVER_LIB) > $@ || del $@
