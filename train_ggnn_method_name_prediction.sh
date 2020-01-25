DATA=sample_data
TRAIN_PATH=${DATA}/java-small-graph-transformed/training
VAL_PATH=${DATA}/java-small-graph-transformed/validation
BATCH_SIZE=10
VAL_BATCH_SIZE=3
SAMPLING_SIZE=60
CHECKPOINT_EVERY=1000
GRAPH_SIZE_THRESHOLD=1500
CUDA=0
VALIDATING=1
PYTHON=python3
${PYTHON} train_ggnn_method_name_prediction.py --train_path ${TRAIN_PATH} --val_path ${VAL_PATH} --batch_size ${BATCH_SIZE} --val_batch_size ${VAL_BATCH_SIZE} --sampling_size ${SAMPLING_SIZE} --checkpoint_every ${CHECKPOINT_EVERY} --cuda ${CUDA} --validating ${VALIDATING} --graph_size_threshold ${GRAPH_SIZE_THRESHOLD}
