# OOP-Proyecto-Integrador-TC1030
Proyecto Integrador TC1030 / Programación orientada a objetos

Team 4: 
José Ángel Tobón Salazar A01411655
Miguel Ángel Bermea Rodríguez A01411671
Jesús Eduardo Rodríguez Romero A01411628
Luis Ángel Ramiro Amaro A01411763
Gustavo Luna Muñoz A01411619

Proyecto Integrador TC1030:

Modalidad:
Equipo

Descripción:
En los últimos años, han proliferado los servicios de streaming de video bajo demanda por ejemplo Netflix, Disney, DC entre otros. Algunos de ellos se especializan por el volumen de videos que proporcionan a sus usuarios mientras que otros se han puesto el reto de mostrar solamente videos de su propia marca. En este proyecto se busca desarrollar la base para una pequeña empresa que un futuro proveerá estos servicios. El software que buscan desarrollar en esta primera etapa consiste en lo siguiente.

1. Se quiere trabajar con dos tipos de videos: películas y series. Todo video tiene un ID, un nombre, una duración y un género (drama, acción, misterio).

2. Las series tienen episodios y cada episodio tiene un título y temporada a la que pertenece.

3. Los videos podrán ser evaluadas por los usuarios.
  a. Las series tendrán una evaluación general (el promedio de todas las temporadas)
  b. Cada temporada podrá tener una evaluación
  c. No se deberá evaluar cada episodio de forma particular.
  d. Cada película se evalúa de forma independiente.

4. Deberá existir una clase general llamada videoteca, la cual deberá contener todos los videos y series del sistema.
  a. Esta clase tendrá el método para enlistas todas las películas y series
  b. En caso de la película mostrará ID, nombre, duración, género y calificación
  c. En caso de las series adicionalmente mostrará cuantas temporadas y episodios tienen.

Entregables:
En la liga de entregables se deberán adjuntar todo los entregables dentro de un archivo .zip. Los entregables son los siguientes:
1. Reporte en pdf que contenga:
  a. Portada con el nombre de los integrantes
  b. Diagrama de clases
  c. La URL de su repositorio de github de este proyecto

2. Archivos de implementación del diagrama de clases (deberá contener archivos .cpp y .h)

3. Archivo main.cpp donde se contenga al menos los siguientes casos de prueba
  a. Crear 1 videoteca
  b. Crear 2 películas y 2 series y agregarlas a la videoteca
  c. Las series deberán tener 2 temporadas y cada temporada deberá tener al menos 2 episodios.
  d. Evaluar todas las 2 películas
  e. Evaluar cada temporada de las 2 series.
  f. Mostrar la información de la videoteca

4. El archivo deberá ser subido a un repositorio de GitHub, donde cada miembro deberá subir la parte que aporto al proyecto.
Nota: En el archivo de prueba no es necesario una interfaz o una interacción dinámica con el sistema (no es necesario el uso de la función cin por ejemplo).
Requerimientos adicionales:
En el modelo y desarrollo se deberán aplicar los siguientes conceptos:
  • Apuntadores
  • Herencia
  • Sobrecarga de funciones y (o) operadores

Rubrica:
  20% Reporte y modelado (Diagrama de clases UML)
  40% Funcionalidad (Implementación en c++ correcta)
  20% Diseño de pruebas, manejo de errores y cumplimiento de requerimientos adicionales.
  20% Manejo del repositorio: si un miembro no tiene al menos 1 push significativo en el GitHub del proyecto, perderá los puntos de manejo de repositorio.
