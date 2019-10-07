import pickle
from anytree import NodeMixin, RenderTree
file_path = "../program_data/PKU_pb_slice_pkl/1/1001.pkl"
# file_path = "../program_data/test_data/3_new.java.pkl"

PARENT_CHILD_EDGE = 0
NEXT_TOKEN_EDGE = 1
LAST_LEXICAL_USE_EDGE = 2
LAST_USE_EDGE = 3
LAST_WRITE_EDGE = 4
RETURN_TO_EDGE = 5
COMPUTE_FROM_EDGE = 6

# class Node:
#     def __init__(self, node_type, node_id):
#         self.node_type = name
#         self.node_id = age
   
class ParentChild():

    def __init__(self, parent_id, children_ids):
        self.parent_id = parent_id
        self.children_ids = children_ids

class Node(NodeMixin):  # Add Node feature
    def __init__(self, name, node_id, node_type, parent=None, children=None):
        super(Node, self).__init__()
        self.name = name
        self.node_id = node_id
        self.node_type = node_type
        self.parent = parent
        if children:
            self.children = children

def build_tree(script):
    """Builds an AST from a script."""
   
    with open(script, 'rb') as file_handler:
        tree = pickle.load(file_handler)
        # print(tree)
        return tree
    return "error"

def extract_def(node):
    def_node = None
    children = [x for x in node.child]   
    for child in children:
        if child.kind == 386:
            def_node = child
    return def_node
    


def if_node_contains_def(node):
    check = False
    children = [x for x in node.child]   
    for child in children:
        if child.kind == 386:
            check = True
    return check


def extract_use(node):
    def_node = None
    children = [x for x in node.child]   
    for child in children:
        if child.kind == 387:
            def_node = child
    return def_node
    


def if_node_contains_use(node):
    check = False
    children = [x for x in node.child]   
    for child in children:
        if child.kind == 387:
            check = True
    return check

# def traverse_tree(root, root_node):

#     nodes = []
#     children = []
    
#     num_nodes = 1
#     queue = [root]
    
#     all_parent_child = []
#     while queue:
#         print("---------")
#         current_node = queue.pop(0)
#         parent_id = num_nodes
#         num_nodes += 1
        
#         children = [x for x in current_node.child]
#         queue.extend(children)

#         # ids.append(num_nodes)
#         parent_node = Node(str(parent_id), num_nodes, current_node.kind, parent=None)
#         children_ids = []

#         child_id = parent_id + 1
#         for i, child in enumerate(children):
#             child_id = parent_id + 1 + i
#             children_ids.append(child_id)
#             node = Node(str(child_id), num_nodes, child.kind, parent=parent_node)

#         parent_child = ParentChild(parent_id, children_ids)
#         all_parent_child.append(parent_child)
        # print(parent_id)
        # print(num_nodes)
           
    
    # return all_parent_child, num_nodes

def _traverse_tree(root):
    num_nodes = 0
    queue = [(root,0)]

    children_ids = []
    children_types = []
    parent_ids = []
    parent_types = []

    use_count = 0
    def_count = 0 
    def_dict = {}
    use_dict = {}
    line_dict = {}

    def_map = {}
    use_map = {}
    while queue:
      
        current_node, parent_id = queue.pop(0)
 
        node_id = num_nodes

        parent_types.append(current_node.kind)

        queue.extend([(child, node_id) for child in current_node.child])
        
        children_ids.append([])
        children_types.append([])
        

        children_ids[parent_id].append(node_id)
        children_types[parent_id].append(current_node.kind)
        
        if(if_node_contains_def(current_node)):
            def_count +=1
            # print current_node
            def_node = extract_def(current_node)
            def_key =def_node.text
          
            if def_key in def_dict:

                value = def_dict[def_key]
                value.append(current_node)
                def_dict[def_key] = value
            else:
                arr = []
                arr.append(current_node)
                def_dict[def_key] = arr


        if(if_node_contains_use(current_node)):
            use_count +=1
            # print current_node
            use_node = extract_use(current_node)
            use_key = use_node.text
          
            if use_key in use_dict:

                value = use_dict[use_key]
                value.append(current_node)
                use_dict[use_key] = value
            else:
                arr = []
                arr.append(current_node)
                use_dict[use_key] = arr



        num_nodes += 1

    # print(def_dict)
    # print("--------------")
    # print(use_dict)
    # for def_key, def_tree in def_dict.items():
    #     for use_key, use_tree in use_dict.items():
    #         if def_key == use_key:
    #             print("----------------")
    #             print(def_tree)
    #             print("#####")
    #             print(use_tree)

    for def_key, def_tree in def_dict.items():
        print(len(def_tree))

    for use_key, use_tree in use_dict.items():
        print(len(use_tree))
    # print(parent_types)
    # print(parent_ids)
    # print(children_ids)
    # print(children_types)
    # print(len(parent_types))
    # print(len(parent_ids))
    # print(len(children_ids))
    # return root_json, num_nodes


data = build_tree(file_path)
root = data.element
# print(root)
_traverse_tree(root)
# tree, num_nodes = _traverse_tree(root)
# print(tree)
# print(tree)
# traverse(tree)
# root_node = Node("1", 1, root.kind)
# print(root_node)
# ids, all_parent_child, num_nodes = traverse_tree(root, root_node)

# print(num_nodes)
# for parent_child in all_parent_child:
    # print(parent_child.parent_id, str(parent_child.children_ids))
# for child in root_node.children:
    # print(child.name)
    # print(child.node_type)
# for pre, fill, node in RenderTree(root_node):
    # treestr = u"%s%s" % (pre, node.name)
    # print(treestr.ljust(8), node.node_type, node.node_id)