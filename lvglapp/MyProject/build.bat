@echo off
setlocal enabledelayedexpansion

:: ===== CONFIGURATION =====
set CC=gcc

:: Path to SDL2 extracted folder
set SDL_PATH=SDL2\x86_64-w64-mingw32

:: Paths to SDL include and lib
set SDL_INCLUDE=%SDL_PATH%\include
set SDL_LIB=%SDL_PATH%\lib
set SDL_DLL=%SDL_PATH%\bin\SDL2.dll

:: Additional includes
set CFLAGS=-Wall -Wextra -Os -I lvgl -I lvgl\src -I lv_drivers -I lv_drivers\sdl -I . -I"%SDL_INCLUDE%\SDL2"
set LDFLAGS=-L"%SDL_LIB%" -lSDL2
set OUT=build\app.exe
set FILELIST=build\filelist.txt

:: ===== CREATE BUILD DIRECTORY =====
if not exist build (
    mkdir build
)

:: ===== COLLECT .c FILES =====
echo Creating file list...
(
    for /R lvgl\src %%f in (*.c) do echo "%%f"
    for /R lv_drivers\sdl %%f in (*.c) do echo "%%f"
    echo "main.c"
) > "%FILELIST%"

:: ===== COMPILE =====
echo Compiling...
%CC% %CFLAGS% @"%FILELIST%" %LDFLAGS% -o "%OUT%"

:: ===== COPY SDL2.dll =====
copy /Y "%SDL_DLL%" build\ >nul

:: ===== RESULT =====
if %errorlevel% neq 0 (
    echo.
    echo ❌ Build failed.
) else (
    echo.
    echo ✅ Build successful: %OUT%
)

endlocal
pause
