��ԭ������E:\nodejsSite�µĿ�ִ���ļ�ͳһ�ŵ�E:\nodejsSite\bin�½��й���

�޸����£�
*****************************************************************
				sh�ļ���
*****************************************************************
#!/bin/sh
basedir=`dirname "$0"`

case `uname` in
    *CYGWIN*) basedir=`cygpath -w "$basedir"`;;
esac

if [ -x "$basedir/../node" ]; then
  "$basedir/node"  "$basedir/../node_modules/node-gyp/bin/node-gyp.js" "$@"
  ret=$?
else 
  node  "$basedir/../node_modules/node-gyp/bin/node-gyp.js" "$@"
  ret=$?
fi
exit $ret

*****************************************************************
				cmd�ļ���
*****************************************************************
:: Created by npm, please don't edit manually.
@IF EXIST "%~dp0\..\node.exe" (
  "%~dp0\node.exe"  "%~dp0\..\node_modules\node-gyp\bin\node-gyp.js" %*
) ELSE (
  node  "%~dp0\..\node_modules\node-gyp\bin\node-gyp.js" %*
)