@echo off
py .\tools\config_style_checker.py
.\hemtt.exe clean
.\hemtt.exe build
pause
