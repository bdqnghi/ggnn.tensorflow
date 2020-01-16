mkdir babi_format
mkdir protobuf_format
for index in {1..104}; do
    # docker run --rm -v $(pwd):/e -it yijun/fast -S -G ProgramData/$index protobuf_format/$index.fbs
    docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast protobuf_format/$index.fbs babi_format/train/train_$index.txt babi_format/test/test_$index.txt
done