from socket import *

tcp = socket(AF_INET, SOCK_STREAM)
address = ("",8866)
tcp.bind(address)
tcp.listen(128)
client,clientaddr = tcp.accept()
while True:    
    recv_data = client.recv(1024)
    print(recv_data)