:: Created by npm, please don't edit manually.
@IF EXIST "%~dp0\..\node.exe" (
  "%~dp0\..\node.exe"  "%~dp0\..\node_modules\buster\bin\buster-server" %*
) ELSE (
  node  "%~dp0\..\node_modules\buster\bin\buster-server" %*
)