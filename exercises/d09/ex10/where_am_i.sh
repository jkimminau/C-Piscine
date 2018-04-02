if [ "ifconfig | grep 'inet ' | wc -l" != "0" ]; then
	ifconfig | grep "inet " | cut -d ' ' -f 2
else
	echo I am lost!
fi
