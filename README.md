Ejercicio Evaluación de Desempeño

Se desea hacer una aplicación para registrar las evaluaciones de desempeño de los empleados de 
una empresa, cuyos datos son los siguientes:
Código de empleado (entero)
Días trabajados (entero)
Profesional (“SI”/”NO”)

Factores a evaluar:
Calidad y Cantidad de Trabajo (entero, valores de 1 a 5)
Cooperación (entero, valores de 1 a 5)
Capacidad de Análisis y Creatividad (entero, valores de 1 a 5). Ingresar sólo si el empleado es 
profesional.

La calificación de los factores es de 1 a 5, siendo 5 la calificación más alta. La Capacidad de Análisis y 
Creatividad se evalúa sólo a los empleados profesionales
Los datos de los empleados terminan cuando el operador indica que no desea registrar más 
empleados.

Se pide informar: Por cada empleado profesional, si tiene o no potencial de desarrollo. Hacer una 
función, que tenga como parámetros los tres factores a evaluar, y devuelva el valor 1 si el empleado 
profesional tiene potencial de desarrollo y el valor 0 si no lo tiene. Mostrar por pantalla el código de 
empleado profesional y un cartel indicando “TIENE CAPACIDAD DE DESARROLLO”, o “NO TIENE 
CAPACIDAD DE DESARROLLO”, haciendo otra función que tenga como parámetros el Código de 
empleado y el resultado obtenido en la primera función.

El empleado profesional tiene potencial de desarrollo si sus calificaciones son:
Calidad y Cantidad de Trabajo>=4 y
Cooperación>=4 y
Capacidad de Análisis y Creatividad>=4

Al finalizar el registro de las evaluaciones, se debe informar:
a) La cantidad de empleados profesionales “Fuera de Nivel”. Son aquellos empleados 
profesionales cuya calificación promedio es menor a 3.
b) El código de empleado con mayor cantidad de días trabajados (se supone único).

No se pueden utilizar variables globales. Se pide: CODIFICACION EN LENGUAJE C DEL ALGORITMO
