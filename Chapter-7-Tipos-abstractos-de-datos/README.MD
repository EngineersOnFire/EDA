# T7: Tipos abstractos de datos

TAD: conjunto bien definido y primitivas con operaciones elementales sobre ese conjunto

TAD = conjunto + primitivas

Ej: int y sus funtiones (sqrt, abs, ....)

Trabajar sin importar la implementación de las funciones ni el funcionamiento del conjunto. Transparente, encapsulado.

Uns __estructura de datos__ es una representación en ordenador de un tipo abstracto de datos.


Ejemplo:
Definir estructura de datos para el TAD Complejos que represente un nº complejo en el ordenador.

Opción 1: 

```c++
struct Complex {
	float r;
	float i;
}
typefed struct Complex Complejo;
```

Opción 2:

```c++
struct complex {
	unsigned float mod;
	float arg;
}
typefed struct Complex Complejo;
```
Opción 3: 
En C++ las estructuras de datos las definiremos dentro de clases

```c++
class Complejo {
private:
	float i;
	float r;
public:
	// etc...
}
```

## Tipos de operaciones

### Generadores (Constructores)

 * SI no están explicitamente, sonvacios por defecto.
 * Puede haber más de 1.
 * Se tienen que llamar como la clase.
 * Se usan para inicializar atributos al instanciar una clase.

### Mutadoras
Modifican algún atributo de la instancia actual.

### Observadores
No modifican ningún atributo de la instancia actual.
Sirven para obtener información de la instancia.

### Destructores
Se invocan automáticamente al salir del ámbito dedefinición de unainstancia.
Se usan para liberar recursos.
Tienen que llamarse comoel de la clase precedido por ~

# Clases abstractas

SI no se saben los tipos de datos se puede definir unaclase abstracta (template, parametrizada).

# Aspectos pariales

Especificación de método es abstracto. 
En ciertos casos puede lanzarse una excepción.
Son los aspectos que no se comtemplan en la especificación y que dependen de la elección de la estructura de datos.
Los métodos que presentanestos aspectos son __métodos parciales__.
La documentación de los métodos es muy importante.

# Implementaciones dinámicas

En C++ la memoria dinámica se gestiona mediante los métodos __new__ y __delete__.







<hr>

# TAD:Complejos:

```c++
class Complejo {
private:
	float i;
	float r;
public:
	// Constructor. Si no es escribe, se crea uno por defecto, vacio.
	Complejo () {
		i = 0.0;
		r = 0.0;
	}

	// Complejo () i = 0.0; r = 0.0 {}; // Forma alternativa a los mismo de antes.

	// Functions....
}
```

<hr>



# TAD: conjunto de enteros de tamaño máximo MAX con método para:

 * SI es o no vacio
 * Obtener número de elementos
 * Añadir elemento


(Por algún misterioso motivo no copié este ejemplo... Solo está el esqueleto básico, nada interesante en el siguiente código XD)
```C++
const int MAX;

class List{
private:

public:
}
```

<hr>

# Ejemplo:

```C++
int x = 10;
int y[] = {3, 8, 7};
Pareja <int, int> *par = new Pareja <int, int>(4, 2);
int *px = &x;
int z = *px;
int x = par->primero();
int *py = y;
int w = *(py + 1);
``` 

