mkdir PKU_graph
for index in {1..104}; do
    docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast PKU_pb_slice_pkl/$index.fbs PKU_graph/train/train_$index.txt PKU_graph/test/test_$index.txt
done