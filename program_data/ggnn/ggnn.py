#!/usr/bin/env python3
import argparse
import os
import os.path
import json
import pickle
import time
import sys
import flatbuffers
from tqdm import tqdm
sys.path.insert(0, '/usr/share/_ggnn')
sys.path.insert(0, '/usr/share/_ggnn/_Graph')
sys.path.insert(0, '/usr/local/share/_ggnn')
sys.path.insert(0, '/usr/local/share/_ggnn/_Graph')
from Graph import *
from Unit import *
from ContextGraph import *
from ContextEdges import *
from Edge import *
from SymbolCandidate import *
from NodeLabel import *
from NodeType import *
import traceback
import pdb
import tqdm

parser = argparse.ArgumentParser()
## Use a global map to avoid sparse ids while ensuring the graph nodes across all the dataset are mapped to consistent ids 
parser.add_argument('--maps', action='store_true', default=True, help='maps node type to a consequetive number')
parser.add_argument('--edgemaps', action='store_true', default=False, help='maps node type to a consequetive number')
############ Do not remove duplicated edges, which is found irrelevant to the performance
parser.add_argument('--dup', action='store_true', default=False, help='keep duplicated edges of the nodetypes')
############ Reinitialise the maps per class of instances. It leads to inappropriate performance for the classification
parser.add_argument('--localmaps', action='store_true', default=False, help='use local maps instead of global one')
## Use the occurrence of type instead of label to encode nodes
parser.add_argument('--occurrence', type=bool, default=True, help='use the <nodetype, occurrence> representation of nodes')
parser.add_argument('--mod', type=int, default=2, help='use the <nodetype, occurrence % mod> representation of nodes')
## Ignore the POSITION and COMMENT node types as noises to the input
parser.add_argument('--noposition', type=bool, default=True, help='ignore POSITION and COMMENT node types')
## Derive the last lexical use edges from adjacent occurrences of same node encodings
parser.add_argument('--lastuse', type=bool, default=False, help='add lastLexicalUse edges "3" between adjacent occurrence nodes of the same node labels')
## Consider only the edge types of Child and NextToken
parser.add_argument('--syntaxonly', type=bool, default=False, help='output only syntactical edges, i.e. type "1" and "2"')
## Do not distinguish edge types
parser.add_argument('--noedgetype', type=bool, default=False, help='ignore edge types by replacing all edge types with "1"')
## Add label to the encoding of nodes
parser.add_argument('--label', type=bool, default=False, help='use the <nodetype, nodelabel> representation of nodes')
## Generate bidirectional edges
parser.add_argument('--bidirect', type=bool, default=False, help='make edges bidirectional')
## Add extra semantic edges as if they are syntactical
parser.add_argument('--mixing', type=bool, default=False, help='make semantic edges syntactical to allow for propagation')
parser.add_argument('argv', nargs="+", help='filenames')
opt = parser.parse_args()
print(opt)

def fbsEdges(builder, edges, type):
    typed_edges = edges[type]
    fbs_edges = []
    for e in typed_edges:
        EdgeStart(builder)
        EdgeAddNode1(builder, e[0])
        EdgeAddNode2(builder, e[1])
        fbs_edges.append(EdgeEnd(builder))
    N = len(fbs_edges)
    if type == "NextToken":
        ContextEdgesStartNextTokenVector(builder, N)
    elif type == "Child":
        ContextEdgesStartChildVector(builder, N)
    elif type == "LastWrite":
        ContextEdgesStartLastWriteVector(builder, N)
    elif type == "ReturnsTo":
        ContextEdgesStartReturnsToVector(builder, N)
    elif type == "LastUse":
        ContextEdgesStartLastUseVector(builder, N)
    elif type == "LastLexicalUse":
        ContextEdgesStartLastLexicalUseVector(builder, N)
    elif type == "ComputesFrom":
        ContextEdgesStartComputesFromVector(builder, N)
    for i in reversed(range(0, N)):
       builder.PrependUOffsetTRelative(fbs_edges[i])
    fbs_nodeTypes = builder.EndVector(N)
    return fbs_nodeTypes

def fbsContextEdges(builder, edges):
    #print(edges)
    if 'NextToken' in edges:
        nextToken = fbsEdges(builder, edges, 'NextToken')
    if 'Child' in edges:
        child = fbsEdges(builder, edges, 'Child')
    if 'LastLexicalUse' in edges:
        lastLexicalUse = fbsEdges(builder, edges, 'LastLexicalUse')
    if 'LastUse' in edges:
        lastUse = fbsEdges(builder, edges, 'LastUse')
    if 'LastWrite' in edges:
        lastWrite = fbsEdges(builder, edges, 'LastWrite')
    if 'ReturnsTo' in edges:
        returnsTo = fbsEdges(builder, edges, 'ReturnsTo')
    if 'ComputesFrom' in edges:
        computesFrom = fbsEdges(builder, edges, 'ComputesFrom')
    ContextEdgesStart(builder)
    if 'NextToken' in edges:
        ContextEdgesAddNextToken(builder, nextToken)
    if 'Child' in edges:
        ContextEdgesAddChild(builder, child)
    if 'LastLexicalUse' in edges:
        ContextEdgesAddLastLexicalUse(builder, lastLexicalUse)
    if 'LastUse' in edges:
        ContextEdgesAddLastUse(builder, lastUse)
    if 'LastWrite' in edges:
        ContextEdgesAddLastWrite(builder, lastWrite)
    if 'ReturnsTo' in edges:
         ContextEdgesAddReturnsTo(builder, returnsTo)
    if 'ComputesFrom' in edges:
         ContextEdgesAddComputesFrom(builder, computesFrom)
    return ContextEdgesEnd(builder)

def fbsNodeType(builder, key, value):
    fbs_key = int(key)
    fbs_value = builder.CreateString(value)
    NodeTypeStart(builder)
    NodeTypeAddNode(builder, fbs_key)
    NodeTypeAddType(builder, fbs_value)
    return NodeTypeEnd(builder)

def fbsNodeTypes(builder, node_types):
    nodeTypes = []
    for k in node_types.keys():
        nodeTypes.append(fbsNodeType(builder, k, node_types[k]))
    N = len(nodeTypes)
    ContextGraphStartNodeTypeVector(builder, N)
    for i in reversed(range(0, N)):
       builder.PrependUOffsetTRelative(nodeTypes[i])
    fbs_nodeTypes = builder.EndVector(N)
    return fbs_nodeTypes

def fbsNodeLabel(builder, key, value):
    fbs_key = int(key)
    fbs_value = builder.CreateString(value)
    NodeLabelStart(builder)
    NodeLabelAddNode(builder, fbs_key)
    NodeLabelAddLabel(builder, fbs_value)
    return NodeLabelEnd(builder)

def fbsNodeLabels(builder, node_labels):
    nodeLabels = []
    for k in node_labels.keys():
        nodeLabels.append(fbsNodeLabel(builder, k, node_labels[k]))
    N = len(nodeLabels)
    ContextGraphStartNodeLabelVector(builder, N)
    for i in reversed(range(0, N)):
       builder.PrependUOffsetTRelative(nodeLabels[i])
    fbs_nodeLabels = builder.EndVector(N)
    return fbs_nodeLabels

def fbsGraph(builder, graph):
    fbs_edges = fbsContextEdges(builder, graph["Edges"])
    fbs_nodeLabels = fbsNodeLabels(builder, graph["NodeLabels"])
    fbs_nodeTypes = fbsNodeTypes(builder, graph["NodeTypes"])

    ContextGraphStart(builder)
    ContextGraphAddEdges(builder, fbs_edges)
    ContextGraphAddNodeLabel(builder, fbs_nodeLabels)
    ContextGraphAddNodeType(builder, fbs_nodeTypes)
    fbs_graph = ContextGraphEnd(builder)
    return fbs_graph

def fbsSymbolCandidate(builder, symbolCandidate):
    symbolName = builder.CreateString(symbolCandidate['SymbolName'])
    SymbolCandidateStart(builder)
    SymbolCandidateAddSymbolDummyNode(builder, symbolCandidate["SymbolDummyNode"])
    SymbolCandidateAddSymbolName(builder, symbolName)
    SymbolCandidateAddIsCorrect(builder, symbolCandidate["IsCorrect"])
    symbolCandidates = SymbolCandidateEnd(builder)
    return symbolCandidates

def fbsSymbolCandidates(builder, symbolCandidates):
    candidates = []
    for s in symbolCandidates:
        candidates.append(fbsSymbolCandidate(builder, s))
    N = len(candidates)
    UnitStartSymbolCandidateVector(builder, N)
    for i in reversed(range(0, N)):
       builder.PrependUOffsetTRelative(candidates[i])
    fbs_candidates = builder.EndVector(N)
    return fbs_candidates

def fbsGatedGraph(builder, data):
    units = []
    for g in tqdm(data):
        fbs_filename = builder.CreateString(g['filename'])
        fbs_slotTokenIdx = g['slotTokenIdx']
        fbs_SlotDummyNode = g['SlotDummyNode']
        fbs_Graph = fbsGraph(builder, g['ContextGraph'])
        fbs_SymbolCandidate = fbsSymbolCandidates(builder, g['SymbolCandidates'])
        UnitStart(builder)
        UnitAddFilename(builder, fbs_filename)
        UnitAddSlotTokenIdx(builder, fbs_slotTokenIdx)
        UnitAddGraph(builder, fbs_Graph)
        UnitAddSlotDummyNode(builder, fbs_SlotDummyNode)
        UnitAddSymbolCandidate(builder, fbs_SymbolCandidate)
        unit = UnitEnd(builder)
        units.append(unit)
    N = len(units)
    GraphStartUnitVector(builder, N)
    for i in tqdm(reversed(range(0, N))):
        builder.PrependUOffsetTRelative(units[i])
    fbs_unit = builder.EndVector(N)
    GraphStart(builder)
    GraphAddUnit(builder, fbs_unit)
    graph = GraphEnd(builder)
    return graph

def jdefault(o):
    if o is None:
        return ' '
    if isinstance(o, set):
        return list(o)
    elif isinstance(o, Graph):
        obj = []
        for i in range(0, o.UnitLength()):
            obj.append(jdefault(o.Unit(i)))
        return obj
    elif isinstance(o, Unit):
        obj = {}
        obj['filename'] = o.Filename()
        obj['slotTokenIdx'] = o.SlotTokenIdx()
        obj['ContextGraph'] = o.Graph()
        obj['SlotDummyNode'] = o.SlotDummyNode()
        vec = []
        for i in range(0, o.SymbolCandidateLength()):
            vec.append(jdefault(o.SymbolCandidate(i)))
        obj['SymbolCandidates'] = vec
        return obj
    elif isinstance(o, SymbolCandidate):
        obj = {}
        obj['SymbolDummyNode'] = o.SymbolDummyNode()
        obj['SymbolName'] = o.SymbolName()
        obj['IsCorrect'] = o.IsCorrect()
        return obj
    elif isinstance(o, ContextGraph):
        obj = {}
        obj['Edges'] = o.Edges()
        array = {}
        for i in range(0, o.NodeLabelLength()):
            nl = o.NodeLabel(i)
            array[nl.Node()] = nl.Label()
        obj['NodeLabels'] = array
        array = {}
        for i in range(0, o.NodeTypeLength()):
            nl = o.NodeType(i)
            array[nl.Node()] = nl.Type()
        obj['NodeTypes'] = array
        return obj
    elif isinstance(o, ContextEdges):
        obj = {}
        vec = []
        for i in range(0, o.NextTokenLength()):
            vec.append(jdefault(o.NextToken(i)))
        obj['NextToken'] = vec
        vec = []
        for i in range(0, o.ChildLength()):
            vec.append(jdefault(o.Child(i)))
        obj['Child'] = vec
        vec = []
        for i in range(0, o.LastLexicalUseLength()):
            vec.append(jdefault(o.LastLexicalUse(i)))
        obj['LastLexicalUse'] = vec
        vec = []
        for i in range(0, o.LastUseLength()):
            vec.append(jdefault(o.LastUse(i)))
        obj['LastUse'] = vec
        vec = []
        for i in range(0, o.LastWriteLength()):
            vec.append(jdefault(o.LastWrite(i)))
        obj['LastWrite'] = vec
        vec = []
        for i in range(0, o.ReturnsToLength()):
            vec.append(jdefault(o.ReturnsTo(i)))
        obj['ReturnsTo'] = vec
        vec = []
        for i in range(0, o.ComputesFromLength()):
            vec.append(jdefault(o.ComputesFrom(i)))
        obj['ComputesFrom'] = vec
        return obj
    elif isinstance(o, Edge):
        obj = [o.Node1(), o.Node2()]
        return obj
    elif isinstance(o, bytes):
        return str(o)
    elif isinstance(o, str):
        return o
    return o.__dict__

def add_edge(opt, out, uniq_edges, src, edgetype, tgt):
    if src != tgt:
       e="%s %d %s\n" % (src, edgetype, tgt)
       if opt.dup:
          out.write(e)
       else:
          uniq_edges[e] = 1

def ggnn2txt(graph, train, test, map_folder='.'):
    if opt.maps or opt.edgemaps:
        maps = {}
    algorithms = []
    node2type = True
    for i in range(0, graph.UnitLength()):
        if (i % 5 != 0 and train != test):
            out = train
        else:
            out = test
        unit = graph.Unit(i)
        p = unit.Filename()
        t = os.path.dirname(p);
        t = os.path.dirname(t);
        if t in algorithms:
            i = algorithms.index(t)
        else:
            i = len(algorithms)
            algorithms.append(t)
        if (opt.maps or opt.edgemaps) and not opt.localmaps:
            input_basename, input_extension = os.path.splitext(p)
            maps_filename = "%s/maps%s.pkl" % (map_folder, input_extension.decode('ASCII'))
            if os.path.exists(maps_filename):
              with open(maps_filename, 'rb') as f:
                 maps = pickle.load(f)
        g = unit.Graph()
        edges = g.Edges()
        NT = g.NodeTypeLength()
        dict = {}
        if opt.occurrence:
            occurrence = {}
        if not opt.dup:
            uniq_edges = {}
        labels = {}
        for j in range(0, g.NodeLabelLength()):
            nl = g.NodeLabel(j)
            t = nl.Label()
            j1 = str(j + 1)
            labels[j1] = t
        ids = {}
        types = {}
        for j in range(0, g.NodeTypeLength()):
            nl = g.NodeType(j)
            t = str(nl.Type().decode('ASCII')) 
            j1 = str(j + 1)
            if t != 'POSITION' and t != 'COMMENT' and t != '271' and t != '6':
               types[j1] = t
               to = t
               if opt.label:
                  l = labels[j1]
                  if l != b'':
                     to = "%s:%s" % (t, l)
               elif opt.occurrence:
                  if not t in occurrence.keys():
                     occurrence[t] = 1 
                  else:
                     occurrence[t] = occurrence[t] + 1
                  to = "%s:%d" % (t, occurrence[t] % opt.mod)
               dict[j1] = to
               if opt.maps or opt.edgemaps:
                  if not to in maps:
                     maps[to] = str(1 + len(maps))
               if t == 'NAME':
                  ids[j1] = dict[j1] #labels[j1]
               if opt.edgemaps:
                  add_edge(opt, out, uniq_edges, j1, 7 + int(maps[to]), j1)
            else:
               dict[j1] = 0
        for edgetype in range(1, 8):
            # out.write("====== %d\n" % edgetype)
            if edgetype == 1:
                n = edges.ChildLength()
            elif edgetype == 2:
                n = edges.NextTokenLength()
            elif edgetype == 3:
                n = edges.LastLexicalUseLength()
            elif edgetype == 4:
                n = edges.LastUseLength()
            elif edgetype == 5:
                n = edges.LastWriteLength()
            elif edgetype == 6:
                n = edges.ReturnsToLength()
            elif edgetype == 7:
                n = edges.ComputesFromLength()
            for j in range(0, n):
                if edgetype == 1:
                    e = edges.Child(j)
                elif edgetype == 2:
                    e = edges.NextToken(j)
                elif edgetype == 3:
                    e = edges.LastLexicalUse(j)
                elif edgetype == 4:
                    e = edges.LastUse(j)
                elif edgetype == 5:
                    e = edges.LastWrite(j)
                elif edgetype == 6:
                    e = edges.ReturnsTo(j)
                elif edgetype == 7:
                    e = edges.ComputesFrom(j)
                if opt.maps and not opt.edgemaps:
                   src = dict[str(e.Node1())]
                   tgt = dict[str(e.Node2())] 
                else:
                   src = str(e.Node1())
                   tgt = str(e.Node2())
                if src != 0 and tgt != 0:
                    if opt.maps:
                        s1 = maps[src]
                    else:
                        s1 = src
                    if opt.noedgetype:
                        edgetype = 1
                    else:
                        s2 = str(edgetype)
                    if opt.maps:
                        s3 = maps[tgt]
                    else:
                        s3 = tgt
                    if (s2 == '1' or s2 == '2') or not opt.syntaxonly:
                       add_edge(opt, out, uniq_edges, s1, edgetype, s3)
                       if opt.bidirect:
                          add_edge(opt, out, uniq_edges, s3, edgetype, s1)
                       if opt.mixing:
                          add_edge(opt, out, uniq_edges, s1, 1, s3)
        if opt.lastuse:
            lastindex = {}
            lastuses = {}
            for j in range(0, g.NodeLabelLength()):
                nl = g.NodeLabel(j)
                t = nl.Label()
                j1 = str(j + 1)
                if t != b'' and t != b'int':
                   if t in lastindex.keys():
                      lastuses[j1] = lastindex[t]
                   lastindex[t] = j1
            for k, v in lastuses.items():
               if opt.maps:
                  t1 = dict[k]
                  t2 = dict[v]
               else:
                  t1 = str(k)
                  t2 = str(v)
               if t1 != '0' and t2 != '0' and t1 != 0 and t2 != 0:
                  if opt.maps:
                     add_edge(opt, out, uniq_edges, maps[t2], 3, maps[t1])
                  else:
                     add_edge(opt, out, uniq_edges, t2, 3, t1)
        if not opt.dup:
           for e in uniq_edges.keys():
               out.write(e)
        out.write("? %d %s\n\n" % (i+1, p.decode('ASCII')))
        if (opt.maps or opt.edgemaps) and not opt.localmaps:
            # Don't assume the files in the same dataset are of the same language
            with open(maps_filename, 'wb') as f:
                pickle.dump(maps, f, pickle.HIGHEST_PROTOCOL)

def get_descendants(child, node):
    descendants = [node]
    for i in range(0, len(child)):
        edge = child[i]
        if edge[0] == int(node):
            descendants.extend(get_descendants(child, str(edge[1])))
    return descendants

def get_subgraph(graph, subnodes):
    idx = {}
    for i in range(0, len(subnodes)):
        idx[subnodes[i]] = i + 1
    subgraph = {}
    edges = graph["Edges"]
    subedges = {}
    child = edges["Child"]
    subchild = []
    nexttoken = edges["NextToken"]
    subnexttoken = []
    lastlexicaluse = edges["LastLexicalUse"]
    sublastlexicaluse = []
    lastuse = edges["LastUse"]
    sublastuse = []
    lastwrite = edges["LastWrite"]
    sublastwrite = []
    returnsto = edges["ReturnsTo"]
    subreturnsto = []
    computesfrom = edges["ComputesFrom"]
    subcomputesfrom = []
    nodetypes = graph["NodeTypes"]
    subnodetypes = {}
    nodelabels = graph["NodeLabels"]
    subnodelabels = {}
    for i in range(0, len(child)):
        edge = child[i]
        if str(edge[0]) in subnodes and str(edge[1]) in subnodes:
            subedge = []
            subedge.append(idx[str(edge[0])])
            subedge.append(idx[str(edge[1])])
            subchild.append(subedge)
    for i in range(0, len(nexttoken)):
        edge = nexttoken[i]
        if str(edge[0]) in subnodes and str(edge[1]) in subnodes:
            subedge = []
            subedge.append(idx[str(edge[0])])
            subedge.append(idx[str(edge[1])])
            subnexttoken.append(subedge)
    for i in range(0, len(lastlexicaluse)):
        edge = lastlexicaluse[i]
        if str(edge[0]) in subnodes and str(edge[1]) in subnodes:
            subedge = []
            subedge.append(idx[str(edge[0])])
            subedge.append(idx[str(edge[1])])
            sublastlexicaluse.append(subedge)
    for i in range(0, len(lastuse)):
        edge = lastuse[i]
        if str(edge[0]) in subnodes and str(edge[1]) in subnodes:
            subedge = []
            subedge.append(idx[str(edge[0])])
            subedge.append(idx[str(edge[1])])
            sublastuse.append(subedge)
    for i in range(0, len(lastwrite)):
        edge = lastwrite[i]
        if str(edge[0]) in subnodes and str(edge[1]) in subnodes:
            subedge = []
            subedge.append(idx[str(edge[0])])
            subedge.append(idx[str(edge[1])])
            sublastwrite.append(subedge)
    for i in range(0, len(returnsto)):
        edge = returnsto[i]
        if str(edge[0]) in subnodes and str(edge[1]) in subnodes:
            subedge = []
            subedge.append(idx[str(edge[0])])
            subedge.append(idx[str(edge[1])])
            subreturnsto.append(subedge)
    for i in range(0, len(computesfrom)):
        edge = computesfrom[i]
        if str(edge[0]) in subnodes and str(edge[1]) in subnodes:
            subedge = []
            subedge.append(idx[str(edge[0])])
            subedge.append(idx[str(edge[1])])
            subcomputesfrom.append(subedge)
    for k, v in nodetypes.items():
        if k in subnodes:
            subnodetypes[str(idx[k])] = v
    for k, v in nodelabels.items():
        if k in subnodes:
            subnodelabels[str(idx[k])] = v
    subedges["Child"] = subchild
    subedges["NextToken"] = subnexttoken
    subedges["LastLexicalUse"] = sublastlexicaluse
    subedges["LastUse"] = sublastuse
    subedges["LastWrite"] = sublastwrite
    subedges["ReturnsTo"] = subreturnsto
    subedges["ComputesFrom"] = subcomputesfrom
    subgraph["Edges"] = subedges
    subgraph["NodeTypes"] = subnodetypes
    subgraph["NodeLabels"] = subnodelabels
    return subgraph

def get_subgraphs(filename, graph):
    data = []
    edges = graph["Edges"]
    child = edges["Child"]
    nodelabels=graph["NodeLabels"]
    for k, v in nodelabels.items():
        subnodes = get_descendants(child, k)
        #
        # Each candidate should have at least 10 nodes
        #
        if len(subnodes) > 10:
            subgraph = get_subgraph(graph, subnodes)
            subdata = {}
            input_basename, input_extension = os.path.splitext(filename)
            subdata["filename"] = '%s-%s%s' % (input_basename.decode('ASCII'), k, input_extension.decode('ASCII'))
            subdata["ContextGraph"] = subgraph
            subdata["slotTokenIdx"] = 0
            subdata["SlotDummyNode"] = 0
            subdata["SymbolCandidates"] = []
            data.append(subdata)
    return data
  
def generate_subgraphs(filename, graph, out):
    with open('/tmp/t.json', 'w') as json_out:
        json.dump(graph, json_out, default=jdefault)
        json_out.close()
    with open('/tmp/t.json', 'r') as json_in:
        graph_data = json.load(json_in)
        json_in.close()
    data = get_subgraphs(filename, graph_data)
    #json.dump(data, json_out)
    builder = flatbuffers.Builder(0)
    fbs_graph = fbsGatedGraph(builder, data)
    builder.Finish(fbs_graph)
    with open('/tmp/tt.fbs', 'wb') as fbs_out:
        buf = builder.Output()
        fbs_out.write(buf)
        fbs_out.close()
    with open('/tmp/tt.fbs', 'rb') as fbs_in:
        buf = fbs_in.read()
        buf = bytearray(buf)
        fbs_graph = Graph.GetRootAsGraph(buf, 0)
        fbs_in.close()
    ggnn2txt(fbs_graph, out, out)

#
# generate a graph for the AST of each node
#
def ggnn2txt_test(graph, test):
    if opt.maps and not opt.localmaps:
        maps = {}
        if os.path.exists('maps.pkl'):
            with open('maps.pkl', 'rb') as f:
                 maps = pickle.load(f)
    algorithms = []
    node2type = True
    for i in trange(0, graph.UnitLength()):
        out = test
        unit = graph.Unit(i)
        p = unit.Filename()
        t = os.path.dirname(p);
        t = os.path.dirname(t);
        if t in algorithms:
            i = algorithms.index(t)
        else:
            i = len(algorithms)
            algorithms.append(t)
        g = unit.Graph()
        edges = g.Edges()
        array = {}
        NT = g.NodeTypeLength()
        dict = {}
        for j in range(0, g.NodeTypeLength()):
            nl = g.NodeType(j)
            j1 = str(j + 1)
            dict[j1] = str(nl.Type())
            if opt.maps:
                if not str(nl.Type()) in maps:
                    maps[str(nl.Type())] = str(1 + len(maps))
        generate_subgraphs(p, g, out)
    if not opt.localmaps:
        with open('maps.pkl', 'wb') as f:
            pickle.dump(maps, f, pickle.HIGHEST_PROTOCOL)

if __name__ == "__main__":
    try:
        if len(opt.argv) > 0:
            input_basename, input_extension = os.path.splitext(opt.argv[0])
            start = time.time()
            if input_extension == ".json":
                with open(opt.argv[0], 'r') as f:
                    data = json.load(f)
            elif input_extension == ".pkl" or input_extension == ".pickle":
                with open(opt.argv[0], 'rb') as f:
                    data = pickle.load(f)
            elif input_extension == ".fbs":
                with open(opt.argv[0], 'rb') as f:
                    buf = f.read()
                    buf = bytearray(buf)
                    data = Graph.GetRootAsGraph(buf, 0)
            end = time.time()
            print(end - start)
        else:
            print("Please provide an input file")
            sys.exit(0)
        if len(opt.argv) > 1:
            output_basename, output_extension = os.path.splitext(opt.argv[1])
            start = time.time()
            if output_extension == ".pkl" or output_extension == ".pickle": 
                with open(opt.argv[1], 'wb') as out:
                    pickle.dump(data, out, pickle.HIGHEST_PROTOCOL)
            elif output_extension == ".json": 
                with open(opt.argv[1], 'w') as out:
                    json.dump(data, out, default=jdefault)
            elif output_extension == ".txt" and len(opt.argv) > 2: 
                with open(opt.argv[1], 'w') as train:
                  with open(opt.argv[2], 'w') as test:
                    if len(opt.argv) > 3:
                       ggnn2txt(data, train, test, opt.argv[3])
                    else:
                       ggnn2txt(data, train, test)
            elif output_extension == ".txt": 
                with open(opt.argv[1], 'w') as test:
                    ggnn2txt_test(data, test)
            elif output_extension == ".fbs":
                with open(opt.argv[1], 'wb') as out:
                    builder = flatbuffers.Builder(0)
                    graph = fbsGatedGraph(builder, data)
                    builder.Finish(graph)
                    buf = builder.Output()
                    out.write(buf)
                    out.close()
            end = time.time()
            print(end - start)
    except:
        typ, value, tb = sys.exc_info()
        traceback.print_exc()
        pdb.post_mortem(tb)
