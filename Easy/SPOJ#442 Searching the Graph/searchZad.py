graph = dict()

t = int(input())

def bfs(start):
    answer = start
    queue = []
    visited = set()
    queue.append(start)

    while len(queue) != 0:
        node = queue.pop(0)
        visited.add(node)

        neighbours = graph.get(node)
        for neighbour in neighbours:
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)
                answer += f' {neighbour}'
        
    print(answer)

visit = set()
def dfs(start):
    print(start, end=" ")
    
    visit.add(start)
    nearby = graph.get(start)
    for node in nearby:
        if node not in visit:
            dfs(node)

    

for l in range(t):
    print(f'graph {l+1}')
    n = input().strip()
    y = int(n)

    for k in range(y):
        g = input().split(' ')
        if int(g[0]) > 0:
            graph[g[0]] = g[2:]
        else:
            graph.update({g[0], []})

    v = input().split(' ')
    while v[0] != '0':
        if v[1] == '1':
            bfs(v[0])
        elif v[1] == '0':
            dfs(v[0])
            print()
            visit.clear()
        v = input().split(' ')
