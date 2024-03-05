#Basics

include makeconfig

createlib:
	$(MAKE) -C $(LIB_PATH) $@

# -I includes
# -L library location
# -lib_name_of_lib

build: createlib
	$(CC) $(file) -I $(LIB_PATH) -lmylib -L $(LIB_PATH) -o runprogram

run:
	@./runprogram

.PHONY: clean
clean:
	@if [ -e $(PATH_TO_OBJECT) ] ; \
	then \
		echo "File exists" ; \
		rm *.o ; \
		rm runprogram ; \
		$(MAKE) -C $(LIB_PATH) $@ ; \
	fi;
