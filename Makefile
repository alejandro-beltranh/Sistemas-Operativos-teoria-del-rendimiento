######################################################################
# Nombre: Alejandro Beltrán Huertas
# fecha: 24 09 2025
#Sistemas Operativos
######################################################################
#Compilador que se va a usar
GCC = gcc

#las librerias necesarias
BIBLIOTECAS = -lm

#Nombre del ejecutable final
PROGRAMAS = mod_beltranA

#Compila los archivos fuentes y genera el ejecutable
$(PROGRAMAS): mod_beltranA.c modulo.c modulo.h
	$(GCC) mod_beltranA.c modulo.c -o $(PROGRAMAS) $(BIBLIOTECAS)

#Elimina el ejecutable 
clean:
	rm -f $(PROGRAMAS) *.o
