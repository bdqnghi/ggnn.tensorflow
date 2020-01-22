DATA=sample_data
TRAIN_PATH=${DATA}/java-small-graph-transformed/training
VAL_PATH=${DATA}/java-small-graph-transformed/validation
BATCH_SIZE=20
PYTHON=python3
${PYTHON} train_ggnn_method_name_prediction.py --train_path ${TRAIN_PATH} --val_path ${VAL_PATH} --batch_size ${BATCH_SIZE}
