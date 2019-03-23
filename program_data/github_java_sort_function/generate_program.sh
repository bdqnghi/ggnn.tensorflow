for index in {1..10}; do
 
    docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast $index.fbs train_$index.txt test_$index.txt
done