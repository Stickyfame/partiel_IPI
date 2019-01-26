all : client server

common.o : common.h

graphics.o : graphics.h

client.o : client.h common.h graphics.h

server.o : server.h common.h

server : common.o server.o
	gcc common.o server.o -o server

client : common.o client.o graphics.o
	gcc common.o graphics.o client.o -o client
