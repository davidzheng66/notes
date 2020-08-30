import socket

server = socket.socket()
print('Sockect created')
server.bind(('localhost', 9999))
server.listen(3)
print('Waiting for connections')

while True:
    client_socket, client_addr = server.accept()
    name = client_socket.recv(1024).decode()
    print('Connected with ', client_addr, name)

    client_socket.send(bytes('Welcome to Python','utf-8'))

    client_socket.close()