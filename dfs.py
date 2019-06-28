Matrix = [[0,1,1,0],[0,0,1,0],[1,0,0,1],[0,0,0,1]]  #adjacency matrix

visited = [0,0,0,0]
stack = [0]

visited[0] = 1
node = stack.pop(len(stack)-1) #first element pop using list as stack so len-1
print(node)

while True:

	for x in range(0,len(visited)):
		if Matrix[node][x] == 1 and visited[x] == 0 :
			visited[x] = 1;
			stack.append(x)
	if len(stack) == 0:
		break;
	else:
		node = stack.pop(len(stack)-1)
		print(node)
