# Ejercicio : especificacion


```TAD
7)
TAD Polinomio
	Igualdad Observacional:
	Generos: polinomio
	
	Observadores Basicos:
		evaluar: polinomio × nat     -> nat
	Generadores:
		cte: nat 									   -> polinomio
		X: 											 -> polinomio
		• + •: polinomio x polinomio -> polinomio
		• . •: polinomio x polinomio -> polinomio
	Otras Operaciones:
		esRaiz: polinomio x nat      -> bool
	Axiomas:
		evaluar(cte(n1), n2) ≡ n1
		evaluar(X, n) 			 ≡ n
		evaluar(p1 + p2, n)  ≡ evaluar(p1, n) + evaluar(p2, n)
		evaluar(p1 . p2, n)  ≡ evaluar(p2, n) . evaluar(p2, n)
		esRaiz(p, n)         ≡ evaluar(p, n) = 0
Fin TAD
```
