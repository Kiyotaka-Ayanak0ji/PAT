
def kruskals(graph):
    edges = []
    for vertex in graph:
        for wt,node in graph[vertex]:
            edges.append((wt, vertex, node))
    edges.sort()
    # print(*edges, sep="\n")
    parent = {}
    for vertex in graph:
        parent[vertex] = vertex
    mst = []

    #implement a function to detect cycles
    def find_parent(vertex):
        if parent[vertex] != vertex:
            parent[vertex] = find_parent(parent[vertex])

        return parent[vertex]


    for edge in edges:
        wt, src, dest = edge
        if find_parent(src) != find_parent(dest):
            mst.append(edge)
            parent[find_parent(src)] = find_parent(dest)
    return mst
    
graph = {
    "A": [(7,"B"), (9, "C"), (14,"F")],
    "B": [(7,"A"), (15, "D"), (10, "C")],
    "C": [(9,"A"), (10, "B"), (11, "D"), (2,"F")],
    "D": [(15, "B"), (6, "E"), (11, "C")],
    "E": [(9, "F"), (6, "D")],
    "F": [(14, "A"),(2, "C"),(9, "E")]
}
mst = kruskals(graph)
print(mst)