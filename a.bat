@echo off

set "ruta_actual=%~dp0"
set "ruta_destino=%ruta_actual%LearningCPP"

REM Crear la carpeta destino si no existe
if not exist "%ruta_destino%" mkdir "%ruta_destino%"

REM Mover los archivos que empiezan con 'archivo'
for %%F in ("%ruta_actual%archivo*.*") do move "%%F" "%ruta_destino%"
