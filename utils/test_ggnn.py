import torch
from torch.autograd import Variable
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score

def test(dataloader, net, criterion, optimizer, opt):
    test_loss = 0
    correct = 0
    net.eval()

    all_targets = []
    all_predicted = []

    for i, (adj_matrix, embedding_matrix, target) in enumerate(dataloader, 0):
        
        # padding = torch.zeros(len(annotation), opt.n_node, opt.state_dim - opt.annotation_dim).double()
        # init_input = torch.cat((annotation, padding), 2)
        # init_input = torch.zeros(len(adj_matrix), opt.n_node, opt.state_dim).double()
        init_input = embedding_matrix
        if opt.cuda:
            init_input = init_input.cuda()
            adj_matrix = adj_matrix.cuda()
            # annotation = annotation.cuda()
            target = target.cuda()

        init_input = Variable(init_input)
        adj_matrix = Variable(adj_matrix)
        # annotation = Variable(annotation)
        target = Variable(target)
        # print(target)
        output = net(init_input, adj_matrix)
        # print(output)
        #test_loss += criterion(output, target).data[0]
        test_loss += criterion(output, target).item()

        pred = output.data.max(1, keepdim=True)[1]
        # print(pred)

        all_predicted.extend(pred.data.view_as(target).cpu().numpy())
        all_targets.extend(target.cpu().numpy())

        correct += pred.eq(target.data.view_as(pred)).cpu().sum()


    test_loss /= len(dataloader.dataset)

    print('Accuracy:', accuracy_score(all_targets, all_predicted))
    print(classification_report(all_targets, all_predicted))
    print(confusion_matrix(all_targets, all_predicted))

    print('Test set: Average loss: {:.4f}, Accuracy: {}/{} ({:.0f}%)'.format(
        test_loss, correct, len(dataloader.dataset),
        100. * correct / len(dataloader.dataset)))
