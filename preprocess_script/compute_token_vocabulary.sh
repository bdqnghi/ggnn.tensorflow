TRAIN_DIR=../code2vec_data/java-small-graph/training
TEST_DIR=../code2vec_data/java-small-graph/test
VAL_DIR=../code2vec_data/java-small-graph/validation
TRAIN_TOKEN_VOCAB_PATH=../preprocessed_data/train_token_vocab.txt
TEST_TOKEN_VOCAB_PATH=../preprocessed_data/test_token_vocab.txt
VALIDATION_TOKEN_VOCAB_PATH=../preprocessed_data/val_token_vocab.txt
PYTHON=python3

${PYTHON} compute_token_vocabulary.py --input ${TRAIN_DIR} --output ${TRAIN_TOKEN_VOCAB_PATH} 
${PYTHON} compute_token_vocabulary.py --input ${TEST_DIR} --output ${TEST_TOKEN_VOCAB_PATH}
${PYTHON} compute_token_vocabulary.py --input ${VAL_DIR} --output ${VALIDATION_TOKEN_VOCAB_PATH}