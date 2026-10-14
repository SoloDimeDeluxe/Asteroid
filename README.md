# Asteroids

Remake del clásico **Asteroids** (Atari, 1979) hecho en C++ con [raylib](https://www.raylib.com/) para la Tecnicatura en Programación Avanzada de Videojuegos (Image Campus).

Autor: Valentin Reyes

## Requisitos

- Visual Studio 2026 (toolset v145)
- Plataforma x64
- raylib 5.5 (ya incluida en `lib/raylib`, linkeada de forma estática)

## Cómo compilar

1. Abrir `Asteroids.slnx`.
2. Elegir `Debug` o `Release` (x64).
3. Compilar y ejecutar (F5).

## Estructura

```
Asteroids/
├── Asteroids.slnx
├── Asteroids.vcxproj
├── src/             código fuente
│   ├── main.cpp
│   ├── game/        loop principal y manejo de pantallas
│   ├── screens/     menú, gameplay y créditos
│   └── utils/       configuración y UI (botones, texto)
├── lib/raylib/      include/ y lib/ de raylib
├── bin/             ejecutables (se genera al compilar, no se versiona)
└── obj/             intermedios (se genera al compilar, no se versiona)
```

## Convenciones de código

- Todo el código vive dentro del namespace `ReyesCuadra`, con un sub-namespace por módulo (`game`, `menu`, `gameplay`, `credits`, `ui`, `config`).
- Funciones y tipos en `PascalCase`, variables en `camelCase`, constantes en `UPPER_SNAKE_CASE`.
- Warnings en nivel 4 (`/W4`) y tratados como errores (`/WX`). Los headers de raylib se incluyen como externos para que sus warnings no afecten.

## Controles

| Pantalla  | Acción |
|-----------|--------|
| Menú      | Click en los botones · ESC para salir |
| Gameplay  | P para pausar · ESC para volver al menú |
| Créditos  | Click en VOLVER · ESC para volver al menú |

## Versiones

- **0.1** – Proyecto base: raylib integrada, ventana 1024x768, loop principal y pantallas (menú, gameplay vacío, créditos).
