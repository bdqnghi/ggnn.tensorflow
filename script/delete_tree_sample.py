import pickle

file_path = "../program_data/PKU_pb_slice_pkl/1/1001.pkl"

def build_tree(script):
    """Builds an AST from a script."""
   
    with open(script, 'rb') as file_handler:
        tree = pickle.load(file_handler)
        return tree
    return "error"
#   return ast.parse(script)

def delete_subtree(root, id):
    num_nodes = 1
    queue = [root]

    while queue:
      
        current_node = queue.pop(0)
        num_nodes += 1
        
        
        children = [x for x in current_node.child]
        queue.extend(children)
       
        
            

       
  
  

data = build_tree(file_path)

root = data.element
# for x in root.child:
#     del x
print(len(root.child))
print("AAAAAAAAAAAa")
# print(data.element.child[0])
# del root.child[:]
# del data.element.child[1]
# del data.element.child[2]
# del data.element.child[1]
# del data.element.child[2]
# print(data)
# traverse_tree(root)