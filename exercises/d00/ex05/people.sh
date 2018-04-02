ldapsearch -x -LLL "uid=z*" cn | sed -n  's/^cn: //p' | sort -r 
