DATA=sample_data
VAL_PATH=${DATA}/java-small-graph-transformed/testing
BATCH_SIZE=32
VAL_BATCH_SIZE=3
SAMPLING_SIZE=1
GRAPH_SIZE_THRESHOLD=1500
CUDA=-1
NODE_TYPE_DIM=30
NODE_TOKEN_DIM=50
PYTHON=python3
${PYTHON} test_ggnn_method_name_prediction.py --val_path ${VAL_PATH} --batch_size ${BATCH_SIZE} --val_batch_size ${VAL_BATCH_SIZE} --sampling_size ${SAMPLING_SIZE} --cuda ${CUDA} --validating ${VALIDATING} --graph_size_threshold ${GRAPH_SIZE_THRESHOLD} --node_type_dim ${NODE_TYPE_DIM} --node_token_dim ${NODE_TOKEN_DIM}