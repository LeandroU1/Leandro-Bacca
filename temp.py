# -*- coding: utf-8 -*-
"""
Editor de Spyder

Este es un archivo temporal.
"""
#CALCULADORA#

def calculadora():
    while True:
        print("Seleccione operación:")
        print("1. Sumar")
        print("2. Restar")
        print("3. Multiplicar")
        print("4. Dividir")
        print("5. Salir")
        
        opcion = input("Ingrese opción (1/2/3/4/5): ")
        
        if opcion == '5':
            print("Saliendo...")
            break
        
        if opcion in ('1', '2', '3', '4'):
            try:
                num1 = float(input("Ingrese primer número: "))
                num2 = float(input("Ingrese segundo número: "))
                
                if opcion == '1':
                    print(f"Resultado: {num1 + num2}")
                elif opcion == '2':
                    print(f"Resultado: {num1 - num2}")
                elif opcion == '3':
                    print(f"Resultado: {num1 * num2}")
                elif opcion == '4':
                    if num2 == 0:
                        print("Error: No se puede dividir entre cero.")
                    else:
                        print(f"Resultado: {num1 / num2}")
            except ValueError:
                print("Error: Entrada no válida.")
        else:
            print("Opción no válida. Intente de nuevo.")
        
calculadora()

#DESCUENTO#

def calcular_descuento():
    try:
        precio = float(input("Ingrese el precio del artículo: "))
        descuento = precio * 0.15
        precio_final = precio - descuento
        print(f"Precio final después del 15% de descuento: {precio_final}")
    except ValueError:
        print("Error: Entrada no válida.")

calcular_descuento()

#SUMA 10#

numero = 10
numero += 5
numero -= 3
numero *= 2
numero /= 4

numero
