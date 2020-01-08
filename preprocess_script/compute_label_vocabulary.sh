DATA=sample_data
TRAIN_DIR=../${DATA}/java-small-graph/training
TEST_DIR=../${DATA}/java-small-graph/test
VAL_DIR=../${DATA}/java-small-graph/validation
TRAIN_LABEL_VOCAB_PATH=../preprocessed_data/train_label_vocab.txt
TEST_LABEL_VOCAB_PATH=../preprocessed_data/test_label_vocab.txt
VALIDATION_LABEL_VOCAB_PATH=../preprocessed_data/val_label_vocab.txt
PYTHON=python3

${PYTHON} compute_label_vocabulary.py --input ${TRAIN_DIR} --output ${TRAIN_LABEL_VOCAB_PATH} 
${PYTHON} compute_label_vocabulary.py --input ${TEST_DIR} --output ${TEST_LABEL_VOCAB_PATH}
${PYTHON} compute_label_vocabulary.py --input ${VAL_DIR} --output ${VALIDATION_LABEL_VOCAB_PATH}