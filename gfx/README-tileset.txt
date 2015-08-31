Pasos para crear/modificar el tileset:
 1 - Crear/modificar un png de 256x32 y guardarlo como tileset-mappy.png
     Este fichero es el que importaremos en mappy para hacer los mapas
 2 - "reordenator tileset-mappy.png tileset-udgs.png"
 3 - Crear un png de 256x64 donde metemos arriba las dos filas del juego de
     caracteres que necesitamos y debajo el contenido de tileset-udgs.png y lo
     guardamos como tileset.png
 4 - Abrimos SevenuP e importamos la imagen tileset.png. Cambiamos en las 
     "output options" -> "Byte sort priority" y ponemos "Charline" arriba.
     Guardamos como fichero ".c" y nombre "tileset.h" (renombrar despues a 
     "tileset.h")
 5 - Mover tileset.h al directorio dev
